// sub_08033E38 at 0x08033E38 (thumb)

undefined4 sub_08033E38(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  cVar1 = sub_0803A434(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  bVar4 = cVar1 == '\x02';
  uVar2 = *(uint *)(param_1 + 600);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x80) == 0) {
      sub_0801CF00(param_1,0x2704);
      *(undefined *)(param_1 + 0x156) = 0;
      if (bVar4) goto LAB_08033f18;
      iVar3 = 0x267;
    }
    else {
      sub_0801CF00(param_1,0x2706);
      *(undefined *)(param_1 + 0x156) = 2;
      if ((bVar4) || (bVar4 = *(char *)(param_1 + 0x26f) == '\x03' || bVar4, bVar4))
      goto LAB_08033f18;
      iVar3 = 0x275;
    }
  }
  else if ((uVar2 & 0x30) == 0) {
    sub_0801CF00(param_1,0x2700);
    *(undefined *)(param_1 + 0x156) = 3;
    if (bVar4) goto LAB_08033f18;
    iVar3 = 0x26d;
  }
  else {
    sub_0801CF00(param_1,0x2702);
    *(undefined *)(param_1 + 0x156) = 1;
    if (bVar4) goto LAB_08033f18;
    iVar3 = 0x272;
  }
  if (*(char *)(param_1 + iVar3) == '\x03') {
    bVar4 = true;
  }
LAB_08033f18:
  sub_080406A0(param_1,bVar4);
  *(undefined *)(param_1 + 0x151) = 0xe;
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xf7;
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08033F5C(param_1);
  return in_lr;
}

