// sub_0810399C at 0x0810399C (thumb)

undefined4 sub_0810399C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202cac4 = 0xab800;
    DAT_0202cacc = 0xad800;
    if (*(int *)(param_1 + 0x60) < 1) {
      sub_0801CF00(param_1,0xde02);
    }
    else {
      sub_0801CF00(param_1,0xde03);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_08002BB4(0x1ae);
  if (iVar1 == 0) {
    sub_08002B10(0x1ae);
    *(undefined2 *)(param_1 + 0xb4) = 0x1ae;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar1 = *(byte *)(param_1 + 0x11) - 1;
    iVar2 = *(int *)(param_1 + 0x68);
    if ((int)(iVar2 + (uint)*(ushort *)(&DAT_08868b48 + iVar1 * 2) * 0x100) <
        *(int *)(param_1 + 0x58)) {
      return in_lr;
    }
  }
  else {
    iVar1 = *(byte *)(param_1 + 0x11) + 1;
    iVar2 = *(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x58) <
        (int)(iVar2 + (uint)*(ushort *)(&DAT_08868b48 + iVar1 * 2) * 0x100)) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0x11) = (char)iVar1;
  *(uint *)(param_1 + 0x58) =
       iVar2 + (uint)*(ushort *)(&DAT_08868b48 + (uint)*(byte *)(param_1 + 0x11) * 2) * 0x100;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

