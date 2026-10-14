// sub_0803A314 at 0x0803A314 (thumb)

undefined8 sub_0803A314(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 600) & 0x20000) == 0) {
    bVar2 = (DAT_02000760 & 0x80) == 0;
    if (bVar2) {
      uVar1 = *(undefined4 *)(&DAT_0885015c + (uint)*(byte *)(param_1 + 0xc3) * 4);
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_0885015c + (uint)*(byte *)(param_1 + 0xc3) * 4);
    }
    uVar1 = sub_08128888(param_1,!bVar2,uVar1);
    if (((byte)(*(char *)(param_1 + 0xc3) - 7U) < 2) || (*(char *)(param_1 + 0xc3) == '\x05')) {
      sub_08002B10(0x1b);
    }
    else {
      sub_08002B10(0x46);
    }
  }
  else {
    uVar1 = sub_08040CD4(param_1);
    sub_08002B10(0x46);
  }
  return CONCAT44(in_lr,uVar1);
}

