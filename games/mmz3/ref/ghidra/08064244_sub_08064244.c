// sub_08064244 at 0x08064244 (thumb)

undefined4 sub_08064244(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080177F4(param_1);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '\0') {
          sub_08007390(param_1 + 0x74,&DAT_08362290);
          sub_08017700(param_1,0x1400);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      goto LAB_080642d8;
    }
    if (bVar1 != 0) goto LAB_080642d8;
    sub_08017700(param_1,0x1402);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08017700(param_1,0x1403);
    sub_08007390(param_1 + 0x74,&DAT_083622c0);
    sub_0800471C(0x3a);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080642d8:
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40);
  if (sVar3 != 0) {
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  return in_lr;
}

