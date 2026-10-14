// sub_080E8BA4 at 0x080E8BA4 (thumb)

undefined8 sub_080E8BA4(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar1 = DAT_02000d14;
  if (0 < param_2 * 0x1000000) {
    uVar5 = (uint)*(byte *)(param_1 + 5);
    iVar7 = *(int *)(param_1 + 0x10);
    uVar4 = uVar5;
    if ((DAT_02000d14 & 3) == 0) {
      if ((DAT_02000d14 & 0x30) != 0) {
        if ((DAT_02000d14 & 0x20) == 0) {
          iVar6 = uVar5 + 1;
        }
        else {
          iVar6 = uVar5 - 1;
        }
        uVar4 = sub_08037C5C(iVar7);
        uVar4 = sub_080EF330(iVar6 + (uVar4 & 0xff));
        if (uVar4 != uVar5) {
          sub_080032EC(1);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else {
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 6) = 8;
      if ((uVar1 & 2) == 0) {
        cVar2 = sub_08037C84(iVar7,uVar5 + 1);
        if (-1 < cVar2) {
          *(char *)(iVar7 + 0x215) = cVar2;
          sub_080032EC(2);
        }
      }
      else {
        sub_080032EC(3);
      }
    }
    uVar3 = sub_08037C84(iVar7,uVar4 + 1);
    sub_080E9D98(uVar3);
  }
  return CONCAT44(in_lr,1);
}

