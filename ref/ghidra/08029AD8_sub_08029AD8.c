// sub_08029AD8 at 0x08029AD8 (thumb)

undefined4 sub_08029AD8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0xffffb800;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0xbb) = 0;
    *(undefined *)(param_1 + 0xbd) = 1;
    sub_08001EE8((int)*(short *)(param_1 + 0xbe));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar2 = sub_08099F90(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
    DAT_02022b6e = DAT_02022b6e | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

