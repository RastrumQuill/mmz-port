// sub_080C3478 at 0x080C3478 (thumb)

undefined8 sub_080C3478(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar1 = DAT_02004ca8;
  if (0 < param_2 * 0x1000000) {
    uVar5 = (uint)*(byte *)(param_1 + 5);
    iVar7 = *(int *)(param_1 + 0x10);
    uVar4 = uVar5;
    if ((DAT_02004ca8 & 3) == 0) {
      if ((DAT_02004ca8 & 0x30) != 0) {
        if ((DAT_02004ca8 & 0x20) == 0) {
          iVar6 = uVar5 + 1;
        }
        else {
          iVar6 = uVar5 - 1;
        }
        uVar4 = sub_0801C540(iVar7);
        uVar4 = sub_080C8CB0(iVar6 + (uVar4 & 0xff));
        if (uVar4 != uVar5) {
          sub_08001EAC(0x29);
        }
        *(char *)(param_1 + 5) = (char)uVar4;
      }
    }
    else {
      *(undefined *)(param_1 + 2) = 3;
      *(undefined *)(param_1 + 6) = 8;
      if ((uVar1 & 2) == 0) {
        cVar2 = sub_0801C564(iVar7,uVar5 + 1 & 0xff);
        if (-1 < cVar2) {
          *(char *)(iVar7 + 0x19d) = cVar2;
          sub_08001EAC(0x2a);
        }
      }
      else {
        sub_08001EAC(0x28);
      }
    }
    uVar3 = sub_0801C564(iVar7,uVar4 + 1 & 0xff);
    sub_080C4050(uVar3);
  }
  return CONCAT44(in_lr,1);
}

