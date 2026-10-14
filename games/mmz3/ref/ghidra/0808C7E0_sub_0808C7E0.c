// sub_0808C7E0 at 0x0808C7E0 (thumb)

undefined4 sub_0808C7E0(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar4 < 0x4000) {
      sub_0800471C(0x10a);
    }
    *(undefined *)(param_1 + 0xb8) = 1;
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08007390(param_1 + 0x74,&DAT_08365738);
    iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
    iVar3 = iVar6 >> 8;
    iVar5 = iVar7 >> 8;
    iVar3 = sub_080FE124(iVar3 * iVar3 + iVar5 * iVar5);
    uVar4 = (uint)(iVar3 << 0x10) >> 8;
    iVar3 = FUN_080fe2f8(iVar6 * 0x100,uVar4);
    iVar5 = FUN_080fe2f8(iVar7 * 0x100,uVar4);
    *(int *)(param_1 + 0x5c) = iVar3 * 4;
    *(int *)(param_1 + 0x60) = iVar5 << 2;
    bVar1 = 0 < iVar3 * 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_08017700(param_1,0x7201);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x4000 < uVar4) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

