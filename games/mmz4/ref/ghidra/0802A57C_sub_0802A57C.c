// sub_0802A57C at 0x0802A57C (thumb)

undefined8 sub_0802A57C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (((*(char *)(DAT_020359b8 + 199) != '\x01') && (*(char *)(DAT_020359b8 + 199) != '\x03')) &&
     ((DAT_0202e910 - 3 & 0xffff) < 8)) {
    uVar3 = DAT_0202e910 - 3 & 0xff;
    if (*(char *)(param_1 + 1) == '\0') {
      if (DAT_0202e8f9 != '\0') {
        uVar2 = 1 << (*(uint *)(&DAT_0884eff4 + uVar3 * 4) & 0xff);
        if ((int)(*(ushort *)(DAT_020359b8 + 0xca) & uVar2) >>
            (*(uint *)(&DAT_0884eff4 + uVar3 * 4) & 0xff) != 0) goto LAB_0802a5f0;
        *(ushort *)(DAT_020359b8 + 0xca) = *(ushort *)(DAT_020359b8 + 0xca) | (ushort)uVar2;
        sub_0810DFC0(*(undefined2 *)(&DAT_0884f014 + uVar3 * 2),0);
      }
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (DAT_0202f38a != 0) {
      uVar1 = 1;
      goto LAB_0802a612;
    }
  }
LAB_0802a5f0:
  uVar1 = 0;
LAB_0802a612:
  return CONCAT44(in_lr,uVar1);
}

