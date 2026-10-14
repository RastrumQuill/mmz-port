// sub_08073608 at 0x08073608 (thumb)

undefined4 sub_08073608(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083635bc)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_0836352c;
LAB_080736ba:
    uVar3 = 6;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080736ca;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_083634fc;
      goto LAB_080736ba;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_080736ca;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      puVar2 = &DAT_0836358c;
      goto LAB_080736ba;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    puVar2 = &DAT_0836355c;
    uVar3 = 7;
  }
  sub_0800736C(param_1 + 0x74,puVar2,param_1 + 0x54,uVar3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_080736ca:
  *(undefined4 *)(param_1 + 0x98) = 0x80735c9;
  sub_080736E4(param_1);
  return in_lr;
}

