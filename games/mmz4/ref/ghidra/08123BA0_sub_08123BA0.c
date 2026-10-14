// sub_08123BA0 at 0x08123BA0 (thumb)

undefined8 sub_08123BA0(int param_1)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_1 + 0xdf5) + -1;
  *(char *)(param_1 + 0xdf5) = cVar1;
  if (cVar1 == -1) {
    local_18 = 0x20000;
    local_14 = 0xf000;
    pcVar4 = (char *)(param_1 + 0xdf6);
    cVar1 = sub_08128A9C(*pcVar4,10);
    if (cVar1 == '\t') {
      sub_080BC990(&local_18,1,*(undefined *)(param_1 + 0xdf7));
    }
    else {
      sub_080BC990(&local_18,0,*(undefined *)(param_1 + 0xdf7));
    }
    *(undefined *)(param_1 + 0xdf5) = 0x40;
    *pcVar4 = *pcVar4 + '\x01';
    *(char *)(param_1 + 0xdf7) = *(char *)(param_1 + 0xdf7) + '\x01';
  }
  if (*(int *)(param_1 + 0xde0) < 0x4b0) {
    pcVar4 = (char *)(param_1 + 0xdfb);
    if (*pcVar4 == '\0') {
      sub_08002B10(0x77);
      *pcVar4 = *pcVar4 + '\x01';
    }
    pbVar3 = (byte *)(param_1 + 0xdf4);
    *(int *)(param_1 + 0xdf0) = (int)(short)(&DAT_08128c10)[*pbVar3] << 4;
    *pbVar3 = *pbVar3 + 1;
  }
  if ((*(uint *)(*(int *)(param_1 + 0xdcc) + 0x8c) & 1) != 0) {
    *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + -0xb4;
  }
  iVar2 = *(int *)(param_1 + 0xde0) + -1;
  *(int *)(param_1 + 0xde0) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  if (*(int *)(param_1 + 0xde0) == 0) {
    sub_08002B5C(0x77);
    sub_08002B10(0x19d);
    *(undefined *)(*(int *)(param_1 + 0xdcc) + 0x254) = 2;
    *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    *(undefined *)(param_1 + 0xde5) = 0;
  }
  return CONCAT44(in_lr,1);
}

