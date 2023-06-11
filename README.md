![MTA Icon](MTA_Icon.png)

# MTA Audio Format Player

## Progress on V1.0.0
![](https://geps.dev/progress/0)


## What is MTA?

MTA stands for Multi Track Audio, which refers to a file format that stores audio data in separate files for each track.

## How can I create an MTA file?

Creating an MTA file will be possible with the upcoming compiler that will be implemented into the MTA Audio Format Player. The compiler will provide a convenient way to assemble your audio tracks into an MTA file. Although the compiler is still in development, the expected command to create an MTA file is as follows:

```bash
# Assuming the executable name is MTA_Player:

MTA_Player --compile ./path/to/your/tracks/in/one/directory --out=./ --version=1 --name="trackName" --artist="artist" --album="Optional" --verbose --log="./path/to/logfile.txt"
```

Let's break down the components of this command:

- `--compile`: This flag indicates that you want to compile your audio tracks into an MTA file.

- `./path/to/your/tracks/in/one/directory`: Specify the path to the directory where your audio tracks are located. The compiler will gather all the tracks from this directory to create the MTA file.

- `--out=./`: This flag sets the output directory for the generated MTA file. In this example, the MTA file will be created in the current directory.

- `--version=1`: Specify the desired version of the MTA format. In this case, version 1 (MTA1) is used.

- `--name="trackName"`: Set the name of the track or the title of the audio content.

- `--artist="artist"`: Specify the artist or creator of the track.

- `--album="Optional"`: Optionally, you can provide the album name if applicable.

- `--verbose`: This flag enables verbose mode, which provides detailed output during the compilation process. It can be helpful for debugging or monitoring the progress.

- `--log="./path/to/logfile.txt"`: Optionally, you can provide a path to a log file where compilation logs will be saved. This allows you to review the compilation process and any relevant messages.

Please note that these command-line options may change or be extended in future versions of the MTA Audio Format Player. It's important to consult the official documentation or release notes for the most up-to-date information on how to create MTA files using the compiler.

## How can I decompile an MTA file?

In addition to creating MTA files, the MTA Audio Format Player also supports decompiling an existing MTA file to extract the individual audio tracks. To decompile an MTA file, you can use the following command:

```bash
# Assuming the executable name is MTA_Player:

MTA_Player --decompile ./path/to/your/MTA_file.mta --out=./path/to/output/directory --version=1
```

Let's break down the components of this command:

- `--decompile`: This flag indicates that you want to decompile an existing MTA file.

- `./path/to/your/MTA_file.mta`: Specify the path to the MTA file that you want to decompile.

- `--out=./path/to/output/directory`: Specify the output directory where the decompiled audio tracks will be saved.

- `--version=1`: Specify the version of the MTA format associated with the MTA file. In this example, version 1 (MTA1) is used.

By specifying the MTA version, the decompile command ensures that the decompilation process

 is aligned with the structure and features of that specific version.

Please note that different MTA versions may have different structures and capabilities. It's important to provide the correct version when decompiling to ensure accurate extraction of the audio tracks from the MTA file.

## How does the MTA file extension work?

The MTA file extension works as follows:

- MTA: This is the file extension used to indicate that a file is in the Multi Track Audio format.

- Version number: The number appended to the MTA extension represents the version of the MTA format. Currently, only version 1 (MTA1) is supported.

By using the MTA file extension, audio players and software applications can recognize the file format and interpret its contents accordingly.

## How can I contribute?

Contributions to the MTA Audio Format Player project are welcomed and appreciated. Here are some ways you can contribute:

- **Code contributions**: If you are a developer, you can contribute by adding new features, fixing bugs, or improving the existing codebase of the MTA Audio Format Player. Fork the project, make your changes, and submit a pull request.

- **Documentation**: You can contribute by improving the existing documentation, adding examples, or creating new sections to help users understand the MTA format or the player itself.

- **Bug reports and feature requests**: If you encounter any issues or have ideas for new features, you can submit bug reports or feature requests in the project's issue tracker.

Please note that community-supported versions of the MTA Audio Format Player may differ in their abilities and may incorporate features from later versions. These versions are developed and maintained by the community, and their capabilities may depend on the contributions and efforts of the community members.

Additionally, a progress bar is a useful feature that provides visual feedback on the progress of tasks. It helps users track the completion of lengthy operations. Consider adding a progress bar to the MTA Audio Format Player to enhance the user experience and provide a visual representation of the ongoing processes.

## When will the player be released?

The release date for the MTA Audio Format Player has not been determined yet. The development of the player is still in progress, and the project team is working hard to deliver a stable and feature-rich player. Stay tuned for updates on the project's official channels and announcements.

## ROADMAP

- **1.0.0**: Basic support for playing MTA1 files will be implemented in this version. The player will be able to load and play MTA1 files, providing essential functionality for playback.

- **1.1.0**: Full support for MTA1 files will be achieved in this version. It will include additional features, improvements, and bug fixes to enhance the player's performance and user experience.

- **2.0.0**: Version 2 will introduce support for albums in the MTA format. This update will allow users to organize their audio tracks into albums within the MTA file, providing better management and playback options.

- **3.0.0**: Version 3 will bring minimal MIDI support to the MTA Audio Format Player. With this update, the player will be able to handle MIDI data, enabling users to incorporate MIDI tracks within their MTA files.

Please note that the roadmap is subject to change based on the development progress and community feedback. The addition of support for albums in version 2 and minimal MIDI support in version 3 reflects the planned enhancements for the MTA Audio Format Player.
