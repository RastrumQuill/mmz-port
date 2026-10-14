// sub_08067808 at 0x08067808 (thumb)

undefined4 sub_08067808(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x8c);
  if ((uVar3 & 0x200) != 0) {
    if (*(char *)(param_1 + 0xc3) == '\0') {
      if ((uVar3 & 0x10000) == 0) {
        bVar4 = 0;
      }
      else {
        if (*(char *)(param_1 + 0xd) == '\x02') {
          *(undefined *)(param_1 + 0xb7) = 8;
          sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xd00);
          if (sVar1 != 0) {
            *(undefined4 *)(param_1 + 0x5c) = 0;
            *(undefined4 *)(param_1 + 0x60) = 0x500;
            sub_08068800(param_1,*(undefined *)(param_1 + 0xb7));
          }
        }
        bVar4 = 2;
        if ((*(uint *)(param_1 + 0x8c) & 0x8000) != 0) {
          bVar4 = 3;
        }
      }
    }
    else {
      bVar4 = (byte)(-(uVar3 & 0x8000) >> 0x1f);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08067964(param_1);
    return in_lr;
  }
  iVar2 = sub_08065A24(param_1);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833dd50);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0806790e:
    if (*(int *)(param_1 + 0x2c) != 0) {
LAB_08067914:
      iVar2 = sub_0801E4D8();
      if (iVar2 == 0) goto LAB_08067934;
      sub_08006E08(param_1 + 0x74,&DAT_0833dd50);
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08067914;
    iVar2 = sub_0801E11C(0,param_1,&DAT_0833dd48);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 != 0) {
      sub_08006E08(param_1 + 0x74,&DAT_0833dd80);
      goto LAB_0806790e;
    }
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833dd20 + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_08067934:
  sub_08012ACC(param_1);
  return in_lr;
}

