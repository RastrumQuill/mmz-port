// sub_080D15B4 at 0x080D15B4 (thumb)

undefined4 sub_080D15B4(undefined4 param_1,undefined4 param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = 0;
  do {
    iVar2 = sub_08005500(DAT_0202ed9c);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 1;
      *(undefined *)(iVar2 + 9) = 4;
      *(undefined4 *)(iVar2 + 0x14) = 0x80d1685;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(undefined *)(iVar2 + 0x10) = 0;
      if (iVar5 == 0) {
        bVar1 = param_3 & 1;
      }
      else {
        bVar1 = 0;
      }
      *(byte *)(iVar2 + 0x11) = bVar1;
      if (bVar1 != 0) {
        *(undefined4 *)(iVar2 + 0x74) = param_1;
        *(undefined4 *)(iVar2 + 0x78) = param_2;
      }
      iVar4 = (param_3 ^ 1) * -0x40 + 0x200;
      iVar3 = iVar4 * *(short *)((int)&DAT_08128c10 + (iVar5 * 0x20000000 + 0x40000000U >> 0x17));
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(iVar2 + 0x5c) = iVar3 >> 8;
      iVar4 = iVar4 * *(short *)((int)&DAT_08128c10 + ((uint)(iVar5 << 0x1d) >> 0x17));
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(iVar2 + 0x60) = iVar4 >> 8;
      *(undefined4 *)(iVar2 + 0x54) = param_1;
      *(undefined4 *)(iVar2 + 0x58) = param_2;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return in_lr;
}

