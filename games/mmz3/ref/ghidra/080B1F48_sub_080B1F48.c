// sub_080B1F48 at 0x080B1F48 (thumb)

undefined4 sub_080B1F48(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xd)) {
      sub_08017700(param_1,0xea01);
      sub_0800471C(0x139);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
LAB_080b1fb8:
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x58) < 0x1001) goto LAB_080b1ffa;
    sub_08017700(param_1,0xea02);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080b1ffa;
    cVar2 = *(char *)(iVar4 + 0xde4 + (uint)*(byte *)(param_1 + 0x11));
    if (cVar2 == -1) goto LAB_080b1ffa;
    iVar3 = sub_0809B854(iVar4,(uint)*(byte *)(param_1 + 0x11),cVar2);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 == 0) goto LAB_080b1ffa;
    *(undefined *)(iVar4 + 0xe12) = 1;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 == 2) goto LAB_080b1fb8;
    if ((bVar1 != 3) || (*(char *)(param_1 + 0x73) != '\x03')) goto LAB_080b1ffa;
    *(undefined *)(iVar4 + 0xde4 + (uint)*(byte *)(param_1 + 0x11)) = 0xff;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_080b1ffa:
  sub_080177F4(param_1);
  return in_lr;
}

