// sub_0809E47C at 0x0809E47C (thumb)

undefined4 sub_0809E47C(int param_1)

{
  short sVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x204) == 0) &&
      (puVar2 = (uint *)(param_1 + 0xbc), *puVar2 < 0x10f)) &&
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885e11c + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885e128 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    if ((0x78 < *puVar2) && (uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x4000 < uVar3)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    *puVar2 = *puVar2 + 1;
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_0809E55C(param_1);
  return in_lr;
}

