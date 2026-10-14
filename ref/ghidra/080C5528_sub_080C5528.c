// sub_080C5528 at 0x080C5528 (thumb)

undefined4 sub_080C5528(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x9ea);
  if ((DAT_02004ca8 & 1) == 0) {
    iVar3 = sub_080B470C(&DAT_0202b5a0,(uint)bVar1);
    sub_080BC0AC(&UNK_082b932a +
                 (ushort)(&DAT_082b8f3c)
                         [*(ushort *)
                           (((iVar3 << 0x18) >> 0x16) +
                           *(int *)(&DAT_082b7858 +
                                   (uint)(byte)(&DAT_082b6ea7)[(uint)bVar1 * 0xc] * 4))],0x11,10);
    uVar2 = sub_080C5BD4(*(undefined *)(param_1 + 0x9e8));
    *(undefined *)(param_1 + 0x9e8) = uVar2;
  }
  else if (*(ushort *)(param_1 + 0x9ec) < *(ushort *)(param_1 + 0x9f0)) {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 4) = 2;
    *(undefined *)(param_1 + 0x9f4) = 0;
    *(undefined *)(param_1 + 0x9f5) = 1;
    *(undefined *)(param_1 + 0x9f6) = 2;
    sub_08001EAC(0xea);
  }
  return in_lr;
}

