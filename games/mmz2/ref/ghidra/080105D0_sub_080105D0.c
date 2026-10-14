// sub_080105D0 at 0x080105D0 (thumb)

undefined4 sub_080105D0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08008814();
  iVar1 = sub_080EF2B8(*(undefined4 *)(param_1 + 0x68),3);
  sub_080027AC(&UNK_087fb2a8 + iVar1 * 0x14,0x4000);
  iVar1 = sub_080EF2B8(*(undefined4 *)(param_1 + 0x68),3);
  sub_08002AEC(&UNK_087fb2b4 + iVar1 * 0x14,0);
  return in_lr;
}

