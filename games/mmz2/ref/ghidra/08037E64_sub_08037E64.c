// sub_08037E64 at 0x08037E64 (thumb)

undefined8 sub_08037E64(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58);
  cVar1 = sub_080083A0(uVar3,iVar2);
  if ((cVar1 == '\0') || (cVar1 = sub_080083A0(uVar3,iVar2 + -0x4000), cVar1 == '\0')) {
    iVar2 = sub_0801F2E8(param_1 + 0x54,(undefined4 *)(param_1 + 0xd8),
                         *(undefined4 *)(param_1 + 0xd8),*(byte *)(param_1 + 10) >> 4 & 1,0);
    if (iVar2 < 0x4000) {
      uVar3 = 0;
      goto LAB_08037ebe;
    }
  }
  uVar3 = 4;
LAB_08037ebe:
  return CONCAT44(in_lr,uVar3);
}

