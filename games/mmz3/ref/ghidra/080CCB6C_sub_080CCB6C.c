// sub_080CCB6C at 0x080CCB6C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080CCB6C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined auStack_18 [4];
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((*(char *)(param_1 + 0x10) == '\x03') &&
       (uVar2 = DAT_0200243b & 0x10, (DAT_0200243b & 0x10) == 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar2;
      *(uint *)(param_1 + 0x90) = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      bVar1 = *(byte *)(param_1 + 9);
      *(undefined4 *)(param_1 + 0xc) = 3;
      goto LAB_080cccba;
    }
    if ((*(char *)(param_1 + 0x10) != '\x05') || ((_DAT_02030104 & 0x41000) != 0x1000)) {
      sub_0801749C(param_1);
      sub_080176EC(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
      sub_0800736C(param_1 + 0x74,&DAT_0836c7fc,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      sub_08009050(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),auStack_18);
      iVar3 = *(int *)(param_1 + 0x54) + 0x800;
      *(int *)(param_1 + 0x54) = iVar3;
      local_14 = *(int *)(param_1 + 0x58) + 0xfff + local_14;
      *(int *)(param_1 + 0x58) = local_14;
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
      if (((*(int *)(DAT_0202f5c0 + 0x54) - iVar3) + 0x2000U < 0x4001) &&
         ((*(int *)(DAT_0202f5c0 + 0x58) - local_14) + 0x2000U < 0x4001)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080CCD88(param_1);
      return in_lr;
    }
  }
  else if ((((*(char *)(param_1 + 0x10) != '\x02') ||
            (((*(byte *)(DAT_0203df90 + 2) & 0xf) >> 1 & 1) == 0)) ||
           ((*(byte *)(DAT_0203df90 + 4) & 1) == 0)) ||
          (((*(byte *)(DAT_0203df90 + 3) & 0xf) >> 3 == 0 ||
           (((*(byte *)(DAT_0203df90 + 4) & 0xf) >> 1 & 1) == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_0800736C(param_1 + 0x74,&DAT_0836c82c,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80ccdd5;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080CCD88(param_1);
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  bVar1 = *(byte *)(param_1 + 9);
  *(undefined4 *)(param_1 + 0xc) = 3;
LAB_080cccba:
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)bVar1 * 4) + 0xc)
  ;
  return in_lr;
}

