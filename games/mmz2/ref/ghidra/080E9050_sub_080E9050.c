// sub_080E9050 at 0x080E9050 (thumb)

undefined8 sub_080E9050(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (0 < param_2 * 0x1000000) {
    uVar6 = (uint)*(byte *)(param_1 + 5);
    iVar7 = *(int *)(param_1 + 0x10);
    uVar2 = sub_08037AAC(iVar7,uVar6 + 1);
    if ((DAT_02000d14 & 3) == 0) {
      if ((DAT_02000d14 & 0x30) != 0) {
        iVar8 = 1;
        if ((DAT_02000d14 & 0x20) != 0) {
          iVar8 = -1;
        }
        uVar4 = sub_08037A60(iVar7);
        uVar2 = uVar6;
        do {
          uVar2 = sub_080EF330(uVar2 + iVar8 + (uVar4 & 0xff),uVar4 & 0xff);
          uVar5 = sub_08037AAC(iVar7,uVar2 + 1);
        } while (*(char *)(iVar7 + 0x206 + (uVar5 & 0xff)) == '\0');
        if (uVar2 != uVar6) {
          sub_080032EC(1);
        }
        *(char *)(param_1 + 5) = (char)uVar2;
      }
    }
    else {
      bVar1 = (byte)DAT_02000d14;
      if ((DAT_02000d14 & 2) == 0) {
        if (*(char *)(iVar7 + 0x206 + (uVar2 & 0xff)) != '\0') {
          *(undefined *)(param_1 + 2) = 2;
          *(byte *)(param_1 + 6) = bVar1 & 2;
          uVar3 = 2;
          goto LAB_080e911a;
        }
        sub_080032EC(4);
      }
      else {
        *(undefined *)(param_1 + 1) = 0;
        sub_080032EC(3);
      }
    }
  }
  uVar3 = 1;
LAB_080e911a:
  return CONCAT44(in_lr,uVar3);
}

