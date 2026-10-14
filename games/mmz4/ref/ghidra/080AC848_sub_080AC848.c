// sub_080AC848 at 0x080AC848 (thumb)

undefined8 sub_080AC848(int param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed90);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 0x18;
    *(undefined *)(iVar2 + 9) = 0x4c;
    *(undefined4 *)(iVar2 + 0x14) = 0x80ac8d5;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined *)(iVar2 + 0x10) = 1;
    *(byte *)(iVar2 + 0x11) = param_2;
    bVar1 = (byte)(1 << (uint)param_2);
    *(byte *)(param_1 + 0xb4) = bVar1 | *(byte *)(param_1 + 0xb4);
    *(byte *)(param_1 + 0xb5) = bVar1 | *(byte *)(param_1 + 0xb5);
    *(byte *)(param_1 + 0xba) = ~bVar1 & *(byte *)(param_1 + 0xba);
    *(byte *)(param_1 + 0xbb) = ~bVar1 & *(byte *)(param_1 + 0xbb);
  }
  return CONCAT44(in_lr,iVar2);
}

