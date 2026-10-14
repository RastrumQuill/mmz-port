// sub_0802A844 at 0x0802A844 (thumb)

undefined4 sub_0802A844(int param_1)

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
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    local_14 = 0xfffff800;
    local_10 = 0;
    uVar2 = sub_08099F90(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    *(undefined *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc)) {
      DAT_02022b6e = DAT_02022b6e | 2;
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xf) == '\x01') &&
          (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1))
  {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x11) = 1;
  }
  return in_lr;
}

