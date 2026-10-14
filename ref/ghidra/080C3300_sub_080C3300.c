// sub_080C3300 at 0x080C3300 (thumb)

undefined8 sub_080C3300(int param_1,int param_2)

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
  
  uVar1 = DAT_02004ca8;
  if (0 < param_2 * 0x1000000) {
    uVar7 = (uint)*(byte *)(param_1 + 5);
    iVar8 = *(int *)(param_1 + 0x10);
    uVar4 = uVar7;
    if ((DAT_02004ca8 & 3) == 0) {
      if ((DAT_02004ca8 & 0x30) != 0) {
        if ((DAT_02004ca8 & 0x20) == 0) {
          iVar5 = uVar7 + 1;
        }
        else {
          iVar5 = uVar7 - 1;
        }
        uVar4 = sub_0801C4FC(iVar8);
        uVar4 = sub_080C8CB0(iVar5 + (uVar4 & 0xff));
        if (uVar4 != uVar7) {
          sub_08001EAC(0x29);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else {
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 6) = 8;
      if ((uVar1 & 2) == 0) {
        cVar2 = sub_0801C510(iVar8,uVar7 + 1 & 0xff);
        if (-1 < cVar2) {
          uVar7 = (uint)(*(char *)(param_1 + 4) == '\x01');
          iVar5 = iVar8 + 0x18a;
          pbVar6 = (byte *)(iVar5 + (uint)(*(char *)(param_1 + 4) == '\0'));
          if ((int)cVar2 == (uint)*pbVar6) {
            *pbVar6 = *(byte *)(iVar5 + uVar7);
          }
          *(char *)(iVar5 + uVar7) = cVar2;
          sub_08001EAC(0x2a);
        }
      }
      else {
        sub_08001EAC(0x28);
      }
    }
    uVar3 = sub_0801C510(iVar8,uVar4 + 1 & 0xff);
    sub_080C3F9C(param_1,uVar3);
  }
  return CONCAT44(in_lr,1);
}

