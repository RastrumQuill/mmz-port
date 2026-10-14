// sub_0801A200 at 0x0801A200 (thumb)

undefined8 sub_0801A200(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 in_lr;
  
  uVar1 = 0;
  bVar7 = false;
  if (param_1 == 0) {
    DAT_020301ac = DAT_020301ac + 1;
    uVar5 = (uint)DAT_020302a0;
    uVar1 = 0;
    do {
      iVar2 = sub_0801A5EC(&DAT_020301a0);
      if (iVar2 == 0) {
        if ((DAT_020301b2 & 1) == 0) {
          if ((DAT_02030104 & 0x20) == 0) {
            puVar3 = &DAT_083494a0;
          }
          else {
            puVar3 = &DAT_083494e8;
          }
          sub_080FE2C0(&DAT_020301a0,*(undefined4 *)(puVar3 + (uint)DAT_020301a0 * 4));
        }
        else {
          bVar7 = true;
        }
      }
      if ((DAT_020301b2 & 1) == 0) {
        uVar1 = ~(uint)DAT_020301a8 & 1;
      }
      iVar2 = sub_08021DCC(&DAT_020301b0);
      if (iVar2 == 0) {
        bVar7 = false;
        sub_0801A69C(&DAT_020301a0);
      }
      else {
        uVar1 = ~(uint)DAT_020301a8 & 1;
      }
    } while (bVar7);
    sub_0801A790();
    uVar4 = (uint)DAT_02002652;
    uVar6 = uVar4 * 0x18 & 0xffffffe0;
    sub_080FE110(&DAT_02002654,&DAT_02002954,uVar6 >> 2);
    uVar4 = uVar4 * 0x18 & 0x1f;
    if (uVar4 != 0) {
      FUN_080fe114((int)&DAT_02002654 + uVar6,(int)&DAT_02002954 + uVar6,uVar4 >> 2 | 0x4000000);
    }
    DAT_02002653 = DAT_02002652;
    DAT_02002652 = param_1;
    if (DAT_020302a0 != '\0') {
      sub_08008D50(&DAT_020302c0);
    }
    sub_0801A530(&DAT_020301a0);
    if (((int)(-uVar5 | uVar5) < 0) && (DAT_020302a0 != '\0')) {
      sub_08017DF0(&DAT_020302c0);
    }
  }
  return CONCAT44(in_lr,uVar1);
}

