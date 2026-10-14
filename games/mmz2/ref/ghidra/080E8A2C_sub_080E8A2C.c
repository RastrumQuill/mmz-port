// sub_080E8A2C at 0x080E8A2C (thumb)

undefined8 sub_080E8A2C(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  uVar1 = DAT_02000d14;
  if (0 < param_2 * 0x1000000) {
    uVar7 = (uint)*(byte *)(param_1 + 5);
    iVar8 = *(int *)(param_1 + 0x10);
    uVar4 = uVar7;
    if ((DAT_02000d14 & 3) == 0) {
      if ((DAT_02000d14 & 0x30) != 0) {
        if ((DAT_02000d14 & 0x20) == 0) {
          iVar5 = uVar7 + 1;
        }
        else {
          iVar5 = uVar7 - 1;
        }
        uVar4 = sub_08037C20(iVar8);
        uVar4 = sub_080EF330(iVar5 + (uVar4 & 0xff));
        if (uVar4 != uVar7) {
          sub_080032EC(1);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else {
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 6) = 8;
      if ((uVar1 & 2) == 0) {
        cVar2 = sub_08037C34(iVar8,uVar7 + 1);
        if (-1 < cVar2) {
          uVar7 = (uint)(*(char *)(param_1 + 4) == '\x01');
          iVar5 = iVar8 + 0x212;
          pbVar6 = (byte *)(iVar5 + (uint)(*(char *)(param_1 + 4) == '\0'));
          if ((int)cVar2 == (uint)*pbVar6) {
            *pbVar6 = *(byte *)(iVar5 + uVar7);
          }
          *(char *)(iVar5 + uVar7) = cVar2;
          sub_080032EC(2);
        }
      }
      else {
        sub_080032EC(3);
      }
    }
    uVar3 = sub_08037C34(iVar8,uVar4 + 1);
    sub_080E9D00(param_1,uVar3);
  }
  return CONCAT44(in_lr,1);
}

