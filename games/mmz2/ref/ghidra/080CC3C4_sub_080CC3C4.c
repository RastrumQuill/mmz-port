// sub_080CC3C4 at 0x080CC3C4 (thumb)

undefined4 sub_080CC3C4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  puVar5 = (uint *)(param_1 + 0x8c);
  if (((*puVar5 & 0x200) != 0) || (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    sub_080B9010(param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (0x2000 < uVar4) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *puVar5 = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x22) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0834921c,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080127E4(param_1,0x690f);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  iVar7 = *(int *)(DAT_0202e130 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
  uVar3 = sub_080EEF7C(iVar6 * iVar6 + iVar7 * iVar7);
  if (0x800 < uVar3) {
    iVar6 = sub_080EF150(iVar6 * 0x100,uVar3);
    iVar7 = sub_080EF150(iVar7 * 0x100,uVar3);
    *(int *)(param_1 + 0x5c) = iVar6;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

