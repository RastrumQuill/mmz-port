// sub_08003330 at 0x08003330 (thumb)

undefined8 sub_08003330(uint param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  param_1 = param_1 & 0xff;
  local_30 = 0x20202020;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (param_1 < 6) {
    sVar1 = 3;
    do {
      sub_080FE14C(param_1 * 0xaaa + 0xe000000,&local_30,0x10);
      if ((((local_30 == 0x49544e49) && (local_28 == param_2)) && ((char)local_24 == '\f')) &&
         ((local_24 >> 0x10 & 0xff) == param_1)) {
        if (param_2 < 0x281) {
          sub_080FE14C(param_1 * 0xaaa + 0xe000010,&DAT_02000010,param_2);
          uVar3 = 0;
          if (param_2 != 0) {
            do {
              local_2c = local_2c - (uint)(byte)(&DAT_02000010)[uVar3];
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_2);
          }
          if (local_2c != 0) goto LAB_080033ca;
        }
LAB_08003358:
        uVar2 = 1;
        goto LAB_0800343e;
      }
LAB_080033ca:
      iVar4 = (param_1 + 6) * 0xaaa;
      sub_080FE14C(iVar4 + 0xe000000,&local_30,0x10);
      if (((local_30 == 0x49544e49) && (local_28 == param_2)) &&
         (((char)local_24 == '\f' && ((local_24 >> 0x10 & 0xff) == param_1)))) {
        if (param_2 < 0x281) {
          sub_080FE14C(iVar4 + 0xe000010,&DAT_02000010,param_2);
          uVar3 = 0;
          if (param_2 != 0) {
            do {
              local_2c = local_2c - (uint)(byte)(&DAT_02000010)[uVar3];
              uVar3 = uVar3 + 1;
            } while (uVar3 < param_2);
          }
          if (local_2c != 0) goto LAB_0800342e;
        }
        goto LAB_08003358;
      }
LAB_0800342e:
      sVar1 = sVar1 + -1;
    } while (sVar1 != 0);
  }
  uVar2 = 0;
LAB_0800343e:
  return CONCAT44(in_lr,uVar2);
}

