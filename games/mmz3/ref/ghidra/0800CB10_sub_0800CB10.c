// sub_0800CB10 at 0x0800CB10 (thumb)

undefined4 sub_0800CB10(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x5c);
  uVar1 = *(ushort *)(param_1 + 0x10);
  iVar2 = sub_080FE460(uVar1,6);
  sub_08004340(uVar3 & 0xff,&DAT_085222a0,iVar2 * 0x1000000 + 0x2f000000U >> 0x18,7,
               (uVar1 & 1) * 0x20 + 2);
  uVar3 = (uVar3 << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar3) = (short)*(undefined4 *)(param_1 + 0x34) + -0x2d00;
  *(ushort *)((int)&DAT_020023cc + uVar3 * 4 + 2) =
       (short)*(undefined4 *)(param_1 + 0x38) + -0x140 + (*(ushort *)(param_1 + 0x10) & 1) * 0x100;
  return in_lr;
}

