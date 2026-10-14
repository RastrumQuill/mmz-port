// sub_08046088 at 0x08046088 (thumb)

undefined4 sub_08046088(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  char acStack_20 [12];
  
  sub_080C8D70(acStack_20,&DAT_080c92a2,10);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(bool *)(param_1 + 0xf) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    uVar3 = sub_080C88E8(((*(int *)(DAT_0202286c + 0x4c) + 0x1900) - *(int *)(param_1 + 0x4c)) *
                         0x10 >> 0x10,
                         ((*(int *)(DAT_0202286c + 0x50) + -0xc00) - *(int *)(param_1 + 0x50)) *
                         0x10 >> 0x10);
    *(char *)(param_1 + 0xdc) = (char)((uVar3 & 0xffff) + 0x4000 >> 8);
    uVar3 = sub_080C88E8(((*(int *)(DAT_0202286c + 0x4c) + -0x1900) - *(int *)(param_1 + 0x4c)) *
                         0x10 >> 0x10,
                         ((*(int *)(DAT_0202286c + 0x50) + -0xc00) - *(int *)(param_1 + 0x50)) *
                         0x10 >> 0x10);
    *(char *)(param_1 + 0xdd) = (char)((uVar3 & 0xffff) + 0x4000 >> 8);
  }
  sub_080297C0(param_1);
  uVar3 = 0xff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = *(undefined *)(param_1 + 0x13);
      cVar1 = sub_080C8CB0(uVar2,6);
      if (cVar1 == '\0') {
        uVar4 = 6;
LAB_08046202:
        uVar3 = sub_080C8C38(uVar2,uVar4);
        uVar3 = uVar3 & 0xff;
      }
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar2 = *(undefined *)(param_1 + 0x13);
      cVar1 = sub_080C8CB0(uVar2,7);
      if (cVar1 == '\0') {
        uVar4 = 7;
        goto LAB_08046202;
      }
    }
    else if ((*(byte *)(param_1 + 0x13) & 7) == 0) {
      uVar3 = (uint)(*(byte *)(param_1 + 0x13) >> 3);
    }
    if (9 < uVar3) goto LAB_0804625a;
    if (4 < uVar3) {
      sub_0808678C(param_1,1,*(char *)(param_1 + 0xdd) - acStack_20[uVar3],1);
      goto LAB_0804625a;
    }
    cVar1 = *(char *)(param_1 + 0xdc) - acStack_20[uVar3];
  }
  else {
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      uVar2 = *(undefined *)(param_1 + 0x13);
      cVar1 = sub_080C8CB0(uVar2,6);
      if (cVar1 == '\0') {
        uVar4 = 6;
LAB_0804617c:
        uVar3 = sub_080C8C38(uVar2,uVar4);
        uVar3 = uVar3 & 0xff;
      }
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      uVar2 = *(undefined *)(param_1 + 0x13);
      cVar1 = sub_080C8CB0(uVar2,7);
      if (cVar1 == '\0') {
        uVar4 = 7;
        goto LAB_0804617c;
      }
    }
    else if ((*(byte *)(param_1 + 0x13) & 7) == 0) {
      uVar3 = (uint)(*(byte *)(param_1 + 0x13) >> 3);
    }
    if (9 < uVar3) goto LAB_0804625a;
    if (uVar3 < 5) {
      sub_0808678C(param_1,1,*(char *)(param_1 + 0xdd) + acStack_20[uVar3],1);
      goto LAB_0804625a;
    }
    cVar1 = *(char *)(param_1 + 0xdc) + acStack_20[uVar3];
  }
  sub_0808678C(param_1,1,cVar1,0);
LAB_0804625a:
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

