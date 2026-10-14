// sub_080A1288 at 0x080A1288 (thumb)

undefined4 sub_080A1288(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = (param_3 & 0xfffff000) + 0x800;
  if ((iVar3 <= (int)param_3) && (bVar1 = (&DAT_082b5934)[param_4], (bVar1 & 2) == 0)) {
    iVar4 = param_3 - iVar3;
    *(int *)(param_1 + 0x50) = iVar3;
    if ((bVar1 & 0xc) == 0) {
      uVar2 = 0xffffff00;
    }
    else {
      if ((bVar1 & 4) == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x100;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
        iVar4 = -iVar4;
      }
      *(int *)(param_1 + 0x4c) = param_2 + iVar4;
      uVar2 = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  return in_lr;
}

