// sub_08032AE8 at 0x08032AE8 (thumb)

undefined8 sub_08032AE8(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if ((param_2 & 0xff) == 0xff) {
    uVar2 = 0;
    do {
      if (((*(byte *)(DAT_0203063c + (uint)(byte)(&DAT_0835b01a)[uVar2]) & 1) != 0) &&
         ((*(byte *)(DAT_0203063c + (uint)(byte)(&DAT_0835b01a)[uVar2]) & 2) == 0)) {
        uVar3 = uVar3 + 1 & 0xff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x17);
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = (uint)(byte)(&DAT_0835b01a)[uVar2];
      if ((*(byte *)(DAT_0203063c + uVar1) & 3) == 1) {
        if (uVar3 == (param_2 & 0xff)) {
          if (0x1a < uVar1) {
            if (uVar1 < 0x28) {
              uVar3 = 1;
            }
            else {
              uVar3 = 2;
            }
            goto LAB_08032b7a;
          }
          break;
        }
        uVar3 = uVar3 + 1 & 0xff;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x17);
    uVar3 = 0;
  }
LAB_08032b7a:
  return CONCAT44(in_lr,uVar3);
}

