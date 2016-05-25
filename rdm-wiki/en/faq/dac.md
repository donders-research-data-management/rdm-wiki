# Frequently asked questions about data acquisition

## How should I specify the "ethics approval identifier"?

Depending on the ethics approval board, the format of the identifier is slightly different. The identifier always specifies the board that approved it, followed by the number at which it is known at that board. Here are some examples  

  - CMO regio A-N 2014/288
  - ECSW 2013-0410-133
  - RUDEC 2013-180
  - IRBN 2014/005

Besides the local ethics board identifier, an ABR ("Algemeen Beoordeling en Registratie") number might be assigned. The combination of these two ensures that the study is registered and can be identified both at the local as well as at the central level (i.e. at the CCMO in The Hague). Through the ABR number, the ethics application can be queried in a public database.

The ABR identifier is always of the form "NLxxxxx.xxx.xx". Here are some examples of the ABR identifier

  - NL31285.091.10
  - NL19731.091.07
  - NL52498.091.15

On [www.toetsingsonline.nl](https://www.toetsingonline.nl) you can find details of these example studies.

More general aspects about the ethics procedures are explained in the [ethics guide](../guides/ethics.md).

### ... additional for the DCCN

The identifier for the general approval of the DCCN adult protocol is "CMO regio A-N 2014/288" and has the ABR number "NL45659.091.14". This approval applies from 01-10-2014 to 01-10-2017. If your study falls outside that range, please check with Sabine Kooijman.

The identifier for the general approval of the DCCN baby protocol is "CMO regio A-N 2012/012" and has the ABR number "NL39352.091.12". This approval applies from 01-02-2012 onwards and allows the inclusion of 1000 individuals.

If you are not sure which identifier to use for your study, please check with Sabine Kooijman.

### ... additional for the DCC

Studies approved by the Ethics Committee Faculty of Social Sciences (ESCW) do not have a ABR number.

If you are not sure which identifier to use for your study, please check with Miriam Kos.

### ... additional for the DCN

The Science Faculty makes use of the Ethics Committee Faculty of Social Sciences (ESCW). Approvals of the ESCW do not have a ABR number.

## Where should I store personal information about the participants?

### For all centers ...

For **data acquisition** you have to know who your participants are and you may need to be able to contact them. This requires personal information to be stored. The mapping of the personal information on the participant-specific subject identifier is called the "pseudonimization key". The pseudonimization key should be stored in an encrypted file that is stored separately from the experimental data. The file should be protected by a strong password according to the [RU password policy](http://www.ru.nl/idmuk/account-information/password-policy/). The password is only to be known to the PI and the researchers involved in data acquisition.

For **data analysis** you should never have the need to access the personal information and you should only use the  study-specific subject ID.

The pseudonimization key must never be stored in the RDM repository. Instead it should be stored on a save storage location to which only researchers involved in the study have access. If the pseudonimization key has to be shared with researchers from other institutions, then it should be stored in SURFdrive. If stored on a location where non-authenticated access to the file is possible (e.g. on the disk of a shared computer), the file *must* be password protected.

### ... additional for the DCCN

If only you need access to the personal details, you should store the pseudonimization key on your m-drive (i.e. your home directory on central storage). If also project collaborators with access to the DCCN computer system need access to the personal details, you should store it on the project directory on central storage. If collaborators outside the DCCN need access, you should store it on a SURFdrive folder that you share with them.
In all cases the file itself should be password protected, and the password should only be known to the people that need to know. After completion of your study, you should give the pseudonimization key and the password to unlock it to Sabine Kooijman for long-term archival and you should remove the file from your m-drive, project directory and/or SURFdrive.

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

You should not upload any *directly* identifying data about your subjects, such as name, address, etc. This also means that you should not upload the informed consent form that is signed by the subject. Note that the DAC is allowed to contain *indirectly* identifying information, such as detailled questionaire results, photos, audio and video recordings or facial features in an anatomical MRI.

You should *not* upload any data that can be obtained as the result of analyses that take other data (typically called _raw data_) as input. The former are typically called _processed data_. Documenting the data analysis is a part of the _Research Documentation Collection_ and, in the ideal scenario, involves the data analysis scripts with which the processed data were obtained.


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

Furthermore, you should add a text document (txt, MS Word, or pdf) that describes the organization of the data over the files and directories.

## How should I annotate the data and the experimental conditions?

You should add a  document (txt, csv, tsv, pdf, MS Word or MS Excel) with a short description of the experiment and that annotates how the conditions, stimuli and responses are represented in the presentation log files and in the trigger channel.

A PowerPoint presentation of the project proposal will contribute to the documentation of the experiment. Also the original presentation code (NBS Presentation, E-Prime, etc.) will contribute to the documentation.

## Who should be coauthor on the data acquisition collections?

All people involved in design and acquisition of the experiment should be included in the list of managers, contributors and/or viewers.


