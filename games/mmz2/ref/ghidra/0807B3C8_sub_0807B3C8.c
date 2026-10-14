// sub_0807B3C8 at 0x0807B3C8 (thumb)

undefined4 sub_0807B3C8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    if ((*(char *)(param_1 + 0x11) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
      cVar1 = *(char *)(iVar3 + 0xdb) + '\x01';
      *(char *)(iVar3 + 0xdb) = cVar1;
      if (cVar1 == '\x04') {
        sub_080032EC(0x76);
      }
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0x11) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ((*(int *)(iVar3 + 0xd4) != 0) && (*(byte *)(param_1 + 0xd) < 0xf)) {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080EF118(param_1,*(undefined4 *)
                          (&DAT_08340178 +
                          (uint)*(byte *)(param_1 + 0xd) * 4 +
                          (uint)*(byte *)(param_1 + 0x11) * 0x48));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807B480(param_1);
  }
  return in_lr;
}

