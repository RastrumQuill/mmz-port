// sub_08031830 at 0x08031830 (thumb)

undefined8 sub_08031830(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  iVar9 = param_1 + 0xd8;
  bVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar3 = sub_080375BC(param_1);
  uVar4 = *(undefined4 *)(param_1 + 0xdc);
  iVar10 = param_1 + 0x54;
  iVar5 = param_1 + 0xb4;
  uVar6 = sub_0801F634(iVar10,iVar5,iVar9,uVar3,uVar4,bVar1,1,0,0,1);
  uVar7 = sub_0801F670(iVar10,iVar5,iVar9,uVar3,uVar4,bVar1,1,0,0,1);
  if ((uVar6 & 0x4f) == 0) {
    if ((uVar7 & 0x4f) != 0) {
      uVar7 = sub_0801F634(iVar10,iVar5,iVar9,uVar3,uVar4,bVar1,1,0,0,1);
      goto joined_r0x080318ee;
    }
  }
  else {
joined_r0x080318ee:
    if ((uVar7 & 0x4f) != 0) {
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      *(undefined4 *)(param_1 + 0x58) = uVar8;
      uVar2 = 0;
      goto LAB_080318fe;
    }
  }
  uVar2 = 1;
LAB_080318fe:
  return CONCAT44(in_lr,uVar2);
}

