// sub_080A10C8 at 0x080A10C8 (thumb)

undefined4 sub_080A10C8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar1 = sub_080064AC(iVar3,iVar4);
  if (iVar1 + -0xa0 < 0xb) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x60);
    if ((iVar5 != 0) || (iVar1 != 0)) {
      iVar3 = iVar3 + iVar5;
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar4 = iVar4 + iVar1;
      *(int *)(param_1 + 0x50) = iVar4;
      iVar2 = sub_080064AC(iVar3,iVar4);
      if (iVar2 + -0xa0 < 0xb) {
        if (iVar5 == 0) {
          if (iVar1 < 0) {
            sub_080A1220(param_1,iVar3,iVar4);
          }
          else {
            sub_080A1288(param_1,iVar3,iVar4);
          }
        }
        else if (iVar5 < 0) {
          sub_080A1150(param_1,iVar3,iVar4);
        }
        else {
          sub_080A11B8(param_1,iVar3,iVar4);
        }
      }
    }
  }
  return in_lr;
}

