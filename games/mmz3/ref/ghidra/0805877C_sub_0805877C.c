// sub_0805877C at 0x0805877C (thumb)

undefined4 sub_0805877C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_08361194);
        iVar3 = *(int *)(param_1 + 0x2c);
        cVar2 = *(char *)(iVar3 + 0xb4);
        while (cVar2 != '\0') {
          sub_0808200C(iVar3);
          cVar2 = *(char *)(iVar3 + 0xb4);
        }
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined *)(iVar3 + 0x94) = 0;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
        sub_08017700(param_1,0xb215);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 1;
    iVar5 = *(int *)(param_1 + 0x2c);
    *(undefined *)(iVar5 + 0xb5) = 0;
    iVar3 = sub_080820B0(iVar5);
    *(int *)(iVar5 + 100) = iVar3 + 0x300;
    sub_08017700(param_1,0xb214);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_0800471C(0x8f);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  sub_080177F4(param_1);
  iVar5 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x54);
  *(int *)(iVar5 + 0x54) = iVar3;
  pcVar4 = (char *)(param_1 + 0x71);
  iVar3 = iVar3 + *(short *)(&DAT_0836128e + *pcVar4 * 4);
  *(int *)(iVar5 + 0x54) = iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = iVar3 + *(short *)(&DAT_0836128e + *pcVar4 * 4) * -2;
  }
  *(int *)(iVar5 + 0x54) = iVar3;
  iVar3 = *(int *)(param_1 + 0x58);
  *(int *)(iVar5 + 0x58) = iVar3;
  *(int *)(iVar5 + 0x58) = iVar3 + *(short *)(&DAT_08361290 + *pcVar4 * 4);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar3 + 100) < 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(int *)(iVar3 + 100) = *(int *)(iVar3 + 100) + -0x20;
  }
  cVar2 = sub_0808225C(iVar3,1);
  *(char *)(param_1 + 0x12) = cVar2 + *(char *)(param_1 + 0x12);
  iVar3 = *(int *)(param_1 + 0x54);
  *(int *)(iVar5 + 0x54) = iVar3;
  iVar3 = iVar3 + *(short *)(&DAT_0836128e + *pcVar4 * 4);
  *(int *)(iVar5 + 0x54) = iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = iVar3 + *(short *)(&DAT_0836128e + *pcVar4 * 4) * -2;
  }
  *(int *)(iVar5 + 0x54) = iVar3;
  iVar3 = *(int *)(param_1 + 0x58);
  *(int *)(iVar5 + 0x58) = iVar3;
  *(int *)(iVar5 + 0x58) = iVar3 + *(short *)(&DAT_08361290 + *pcVar4 * 4);
  return in_lr;
}

