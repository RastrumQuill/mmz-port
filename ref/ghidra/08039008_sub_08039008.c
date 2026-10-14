// sub_08039008 at 0x08039008 (thumb)

undefined4 sub_08039008(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 0xc2));
    local_14 = 0;
    local_10 = 0;
    uVar2 = sub_08099F90(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    *(undefined *)(param_1 + 0x12) = 0x34;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_08015698(0xf,param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

