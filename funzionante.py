# plot dog photos from the dogs vs cats dataset
from os import makedirs, listdir
from random import seed, random
from shutil import copyfile

from matplotlib import pyplot
from matplotlib.image import imread
# creo la directory
dataset_home = 'dataset_dogs_vs_cat/'
subdirs = ['train/', 'test/']
for subdir in subdirs:
    # create label subdirectories
    labeldirs = ['dogs/', 'cats/']
    for labldir in labeldirs:
        newdir = dataset_home + subdir + labldir
        makedirs(newdir, exist_ok=True)
# seed generatore di numeri casuali
seed(1)
# define ratio of pictures to use for validation
val_ratio = 0.25
# define location of dataset
folder = 'train/'
# copy training dataset images into subdirectories
src_directory = 'train/'
for file in listdir(src_directory):
    src = src_directory + '/' + file
    dst_dir = 'train/'
    if random() < val_ratio:
        dst_dir = 'test/'
    if file.startswith('cat'):
        dst = dataset_home + dst_dir + 'cats/'+ file
        copyfile(src, dst)
    # su python else if si scrive elif
    elif file.startswith('dog'):
        dst = dataset_home + dst_dir + 'dogs/'+ file
        copyfile(src, dst)
# plot first few images
for i in range(9):
    # define subplot
    pyplot.subplot(330 + 1 + i)
    # define filename
    filename = folder + 'dog.' + str(i) + '.jpg'
    # load image pixels
    image = imread(filename)
    # plot raw pixel data
    pyplot.imshow(image)
# show the figure
pyplot.show()