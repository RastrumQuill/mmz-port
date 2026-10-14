// sub_080B7EE0 at 0x080B7EE0 (thumb)

undefined4 sub_080B7EE0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  piVar1 = (int *)(param_1 + 0xd0);
  iVar4 = param_1 + 0x4c;
  iVar2 = sub_080B52CC(param_1,*piVar1,iVar4,&local_28,0);
  if (iVar2 == *piVar1) {
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = local_28 - *(int *)(param_1 + 0x4c);
    iVar3 = local_24 - *(int *)(param_1 + 0x50);
    if ((((uint)(iVar6 + iVar5) <= (uint)(iVar5 * 2)) &&
        ((uint)(iVar3 + iVar5) <= (uint)(iVar5 * 2))) &&
       (iVar6 * iVar6 + iVar3 * iVar3 <= iVar5 * iVar5)) {
      iVar5 = sub_080259C0(iVar4,&local_28);
      iVar5 = iVar5 - (uint)*(byte *)(param_1 + 0xcc);
      iVar6 = iVar5 + 0x40;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = iVar5 + 0x13f;
      }
      iVar6 = iVar6 + (iVar3 >> 8) * -0x100;
      iVar5 = iVar6 + 0x100;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar6 + 0x1ff;
      }
      if (iVar5 + (iVar3 >> 8) * -0x100 < 0x81) {
        *(int *)(param_1 + 0x4c) = local_28;
        *(int *)(param_1 + 0x50) = local_24;
        iVar2 = sub_080B52CC(param_1,iVar2,iVar4,&local_28,1);
        if (iVar2 == *piVar1) {
          *(undefined *)(param_1 + 0xe) = 2;
          *(undefined2 *)(param_1 + 0xce) = 0xb4;
          *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x80;
          return in_lr;
        }
        *(undefined *)(param_1 + 0xe) = 3;
        *(undefined2 *)(param_1 + 0xce) = 0x3c;
        return in_lr;
      }
    }
    sub_080B4040(param_1 + 0x4c,&local_28,param_1 + 0x54,(byte *)(param_1 + 0xcc),0x500,0x500,0x800,
                 0x500,0x70,0xe0,4);
  }
  else {
    sub_080B81B8(param_1);
    sub_080B7CAC(param_1);
  }
  return in_lr;
}

