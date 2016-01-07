# Frequently asked questions about data acquisition

## Which data should I upload to a DAC?

In principle all raw data plus a description that would allow a colleague of you to make sense of the data. Of course this triggers the question *"What is raw data?"*. This is not always clear, but some examples might help:

### behavioural experiments
  * presentation log files

### anatomical MRI experiments
  * dicom files
  * individual subject questionaires (but not the informed consent form)

### functional MRI experiments
  * dicom files
  * presentation log files
  * eye tracker data that was recorded along
  * video files that were recorded along
  * ExG files that were recorded along
  * individual subject questionaires (but not the informed consent form)

### EEG experiments
  * EEG files (vhdr/vmrk/dat)
  * presentation log files
  * possibly eye tracker data that was recorded along
  * possibly video and audio files that were recorded along with the EEG
  * individual subject questionaires (but not the informed consent form)

### MEG experiments
  * MEG datasets
  * presentation log files
  * possibly eye tracker data that was recorded along
  * possibly video and audio files that were recorded along with the EEG
  * individual subject questionaires (but not the informed consent form)

Besides these types of data, you might also have to upload individual subject questionaires. Note that you should not upload the informed consent form to the RDM system.

In general, you should also upload a copy of the presentation code and stimulus material that you used during the experiment and of the lab notes that you wrote down during the experiment.

## Which data should I not upload to a DAC?

You should not upload any *directly* identifying data about your subjects, such as name, address, etc. This also means that you should not upload the informed consent form that is signed by the subject. Note that the DAC is allowed to contain *indirectly* identifying information, such as detailled questionare results, photos, audio and video recordings or facial features in an MRI.

## How should I organize the data in a DAC?

This depends on the type of data and experimental details, but in general we recommend a structure such as

````
toplevel/MRI
toplevel/MEG
toplevel/EEG
toplevel/Presentation
etc.
````

and then

````
toplevel/MRI/Subj01
toplevel/MRI/Subj02
toplevel/MRI/Subj03
etc.
````

Furthermore, you should add a text document (txt, MS Word or pdf) that describes the organization of the data over the files and directories.

## How should I annotate the data and the experimental conditions?

You should add a text document (txt, csv, MS Word, MS Excel, or pdf) with a short desciption of the experiment and that annotates how the conditions, stimuli and responses are represented in the presentation log files and in the trigger channel.

A powerpoint presentation of the project proposal will contribute to the documentation of the experiment. Also the original presentation code will contribute to the documentation.
