// sub_080C86CC at 0x080C86CC (thumb)

undefined4 sub_080C86CC(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),10);
  if (cVar1 == '\0') {
    sub_080C8358(param_1 + 0x54,1,0,*(undefined *)(param_1 + 0x11));
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if ((*(byte *)(iVar3 + 0xdd0) < 4) &&
       (uVar2 = *(int *)(iVar3 + 0xdd4) + 100, *(uint *)(iVar3 + 0xdd4) = uVar2, 99999 < uVar2)) {
      *(undefined4 *)(iVar3 + 0xdd4) = 99999;
    }
    iVar3 = param_1 + 0x54;
    sub_080C8358(iVar3,2,0,*(undefined *)(param_1 + 0x11));
    sub_080C8358(iVar3,2,1,*(undefined *)(param_1 + 0x11));
    sub_080C8358(iVar3,2,2,*(undefined *)(param_1 + 0x11));
    sub_080C8358(iVar3,2,3,*(undefined *)(param_1 + 0x11));
    sub_080C8358(iVar3,2,4,*(undefined *)(param_1 + 0x11));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C83EC(param_1);
  }
  return in_lr;
}

