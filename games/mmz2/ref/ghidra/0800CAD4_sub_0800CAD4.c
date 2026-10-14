// sub_0800CAD4 at 0x0800CAD4 (thumb)

undefined4 sub_0800CAD4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08008814();
  iVar1 = sub_080EF2B8(*(undefined4 *)(param_1 + 0x68),3);
  sub_080027AC(&UNK_087fb03c + iVar1 * 0x14,0x4000);
  iVar1 = sub_080EF2B8(*(undefined4 *)(param_1 + 0x68),3);
  sub_08002AEC(&UNK_087fb048 + iVar1 * 0x14,0);
  return in_lr;
}

