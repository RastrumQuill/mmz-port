// sub_080A11B8 at 0x080A11B8 (thumb)

undefined4 sub_080A11B8(int param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = (param_2 & 0xfffff000) + 0x800;
  if ((iVar3 <= (int)param_2) && (bVar1 = (&DAT_082b5934)[param_4], (bVar1 & 8) == 0)) {
    iVar4 = param_2 - iVar3;
    *(int *)(param_1 + 0x4c) = iVar3;
    if ((bVar1 & 3) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      if ((bVar1 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0x100;
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
        iVar4 = -iVar4;
      }
      *(int *)(param_1 + 0x50) = param_3 + iVar4;
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  return in_lr;
}

