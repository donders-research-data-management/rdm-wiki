# Frequently asked questions about data acquisition

## Where should I store personal information about the participants?

### For all centers ...

For **data acquisition** you have to know who your participants are and you may need to be able to contact them. This requires personal information to be stored. The mapping of the personal information on the participant-specific subject identifier is called the "pseudonimization key". The pseudonimization key should be stored in a password protected file, for which the password is only known to the PI and the researchers involved in data acquisition. The final responsibility for the save storage of the pseudonimization key is with the PI. 

For **data analysis** you should never have the need to access the personal information and you should only use the  study-specific subject ID.

The pseudonimization key should never be stored in the RDM reposity. Instead it should be stored on a save storage location to which only researchers involved in the study have access.

### ... additional for the DCCN

If only **you** need access to the personal details, you should store the pseudonimization key on your m-drive (i.e. your home directory on central storage). If also project collaborators with access to the DCCN computer system need access to the personal details, you should store it on the project directory on central storage. If collaborators outside the DCCN need access, you should store it on a SURFdrive folder that you share with them. In all cases the file itself should be password protected, and the password should only be known to the people that need to know. After completion of your project, you should give the pseudonimization key and the password to unlock it to Sabine Kooijman for long-term archival and you should remove the file from your m-drive, project directory or SURFdrive.

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
