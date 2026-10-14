// sub_08034DC8 at 0x08034DC8 (thumb)

undefined8 sub_08034DC8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  bVar1 = sub_08037150();
  if ((char)bVar1 < '\0') {
LAB_08034ec8:
    uVar3 = 3;
  }
  else {
    if (bVar1 == 3) {
      pcVar5 = (char *)(param_1 + 0x177);
      if (*pcVar5 == '\x01') {
        pcVar6 = (char *)(param_1 + 0x178);
        if (*pcVar6 == '\x01') {
          cVar2 = sub_08036FD0(param_1);
          if (cVar2 != '\0') {
            *(char *)(param_1 + 0x17b) = *pcVar5;
            *pcVar5 = '\x02';
            *(char *)(param_1 + 0x17c) = *pcVar6;
            *pcVar6 = '\0';
            goto LAB_08034ea4;
          }
          pcVar4 = (char *)(param_1 + 0x179);
          if (*pcVar4 == '\x03') {
            *(char *)(param_1 + 0x17b) = *pcVar5;
            *pcVar5 = '\x01';
            *(char *)(param_1 + 0x17c) = *pcVar6;
            *pcVar6 = '\x01';
            *(char *)(param_1 + 0x17d) = *pcVar4;
            *pcVar4 = '\0';
          }
        }
      }
    }
    else {
      pcVar5 = (char *)(param_1 + 0x177);
      if ((*pcVar5 != '\x01') || (pcVar6 = (char *)(param_1 + 0x178), *pcVar6 != '\x01'))
      goto LAB_08034ec8;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 3;
      *(char *)(param_1 + 0x17b) = *pcVar5;
      *pcVar5 = '\0';
      *(char *)(param_1 + 0x17c) = *pcVar6;
      *pcVar6 = '\0';
LAB_08034ea4:
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
    }
    uVar3 = (uint)bVar1;
  }
  return CONCAT44(in_lr,uVar3);
}

