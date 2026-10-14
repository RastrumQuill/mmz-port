// sub_08056B80 at 0x08056B80 (thumb)

undefined4 sub_08056B80(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x20) + 0xbc) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    if (*(byte *)(*(int *)(param_1 + 0xc0) + 0xc) < 2) {
LAB_08056c14:
      if (*(char *)(param_1 + 0x10) == '\0') goto LAB_08056c58;
      if (*(byte *)(iVar2 + 0xc) < 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      bVar1 = *(byte *)(param_1 + 10);
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\0') {
      if ((*(char *)(iVar2 + 0x10) == '\0') && ((*(uint *)(iVar2 + 0xbc) & 0x100) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      goto LAB_08056c14;
    }
LAB_08056c58:
    if ((*(uint *)(param_1 + 0xbc) & 0x100) != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
  }
  return in_lr;
}

