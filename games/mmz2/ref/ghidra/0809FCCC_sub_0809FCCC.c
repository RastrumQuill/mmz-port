// sub_0809FCCC at 0x0809FCCC (thumb)

undefined4 sub_0809FCCC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x3503);
      bVar1 = 0 < *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x5c) = (uint)bVar1 * 0x200 + -0x100;
      if (bVar1 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      sub_08006E08(param_1 + 0x74,&DAT_08343f40);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    iVar4 = *(int *)(iVar5 + 0x54) - iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3 - *(int *)(iVar5 + 0x54);
    }
    if (iVar4 < 0x800) {
      sub_080032EC(0x83);
      *(char *)(iVar5 + 0xc4) = *(char *)(iVar5 + 0xc4) + '\b';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

