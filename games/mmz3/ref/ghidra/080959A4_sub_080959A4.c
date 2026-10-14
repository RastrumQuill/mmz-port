// sub_080959A4 at 0x080959A4 (thumb)

undefined4 sub_080959A4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 9;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_0800736C(param_1 + 0x74,&DAT_083668e4,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8095e31;
    goto LAB_08095b36;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0801749C(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  if (((DAT_02002443 & 0x10) == 0) || (uVar2 = DAT_02030104 & 0x40, (DAT_02030104 & 0x40) != 0)) {
    uVar2 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar4 = 0xc;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 | 5;
    uVar4 = 0x10;
  }
  sub_0800736C(param_1 + 0x74,&DAT_08366854,param_1 + 0x54,uVar4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(uint *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = 0x8095e31;
  sub_08017700(param_1,0xdb01);
  uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (*(int *)(DAT_0202f5c0 + 0x54) == *(int *)(param_1 + 0x54) || iVar3 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(bool *)(param_1 + 0x4c) = 0 < iVar3;
    bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar3) << 4;
LAB_08095b26:
    *(byte *)(param_1 + 0x4a) = bVar1;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      goto LAB_08095b26;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  *(undefined *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
LAB_08095b36:
  sub_08095B44(param_1);
  return in_lr;
}

