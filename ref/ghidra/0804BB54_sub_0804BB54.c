// sub_0804BB54 at 0x0804BB54 (thumb)

undefined4 sub_0804BB54(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (0x3000 < *(int *)(param_1 + 0xb8)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 4;
  }
  iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(int *)(param_1 + 0x50) + 0x1a00);
  iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x1a00);
  if ((iVar4 < 0) || (iVar5 < 0)) {
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\x03') {
      if (iVar4 < iVar5) {
        iVar4 = *(int *)(param_1 + 0x50) + iVar4;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x50) + iVar5;
      }
      *(int *)(param_1 + 0x50) = iVar4;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1a00;
      iVar5 = *(int *)(param_1 + 0x24);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      *(undefined *)(param_1 + 0x10) = 2;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
      if (bVar1) {
        uVar6 = 0x240;
      }
      else {
        uVar6 = 0xfffffdc0;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      sub_080033F0(param_1 + 0x6c,1);
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x12) = 0;
    }
    else {
      sub_080033F0(param_1 + 0x6c,7);
    }
  }
  if (0x7fff < *(uint *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0xe00;
    *(undefined *)(param_1 + 0x45) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined4 *)(param_1 + 0x58) = 0;
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0x90) = 0;
      *(undefined *)(iVar5 + 0x94) = 0;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined *)(param_1 + 0x10) = 2;
    *(undefined *)(param_1 + 0xd) = 1;
    sub_080033F0(param_1 + 0x6c,1);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
    if (bVar1) {
      uVar6 = 0x240;
    }
    else {
      uVar6 = 0xfffffdc0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  return in_lr;
}

