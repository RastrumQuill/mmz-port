// sub_0806B2E0 at 0x0806B2E0 (thumb)

undefined4 sub_0806B2E0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar1 != 0xf) {
      iVar3 = sub_08065A24(param_1);
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 0xe) == '\x02') {
          bVar4 = *(byte *)(param_1 + 0xbc);
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            bVar4 = bVar4 | 0x10;
          }
          sub_080B0ACC(param_1 + 0x54,&DAT_0833e4ec,0,bVar4);
        }
        if (*(char *)(param_1 + 0xbd) == '\0') {
          sub_080127E4(param_1,0x808);
          sub_08006E08(param_1 + 0x74,&DAT_0833e3e8);
        }
        else {
          sub_080127E4(param_1,0x800);
          sub_08006E08(param_1 + 0x74,&DAT_0833e3d0);
        }
        sub_080128D4(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      sub_0806B4B8(param_1);
      sub_0806B4F4(param_1);
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e38c + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else {
    *(undefined *)(param_1 + 0xc1) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_0806B3F0(param_1);
  return in_lr;
}

