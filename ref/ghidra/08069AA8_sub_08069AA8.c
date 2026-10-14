// sub_08069AA8 at 0x08069AA8 (thumb)

undefined4 sub_08069AA8(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 10;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (*(char *)(param_1 + 0x10) == '\0') {
      bVar1 = *(byte *)(param_1 + 10);
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
      if ((bVar1 & 0x10) == 0) {
        iVar4 = *(int *)(iVar7 + 0x4c) + -0xe00;
      }
      else {
        iVar4 = *(int *)(iVar7 + 0x4c) + 0xe00;
      }
      *(int *)(param_1 + 0x4c) = iVar4;
      sub_080399A0(param_1,0,0);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(iVar7 + 0x4c) + ((uint)*(byte *)(param_1 + 0x12) * -2 + 0x16) * 0x100;
      }
      else {
        iVar4 = *(int *)(iVar7 + 0x4c) + ((uint)*(byte *)(param_1 + 0x12) * -2 + 0x16) * -0x100;
      }
      *(int *)(param_1 + 0x4c) = iVar4;
    }
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 2;
    }
    break;
  case 1:
    cVar2 = *(char *)(param_1 + 0x10);
    if (cVar2 == '\0') {
      uVar5 = sub_080697AC(param_1,*(undefined *)(param_1 + 0xc1),1,*(byte *)(param_1 + 10) >> 4 & 1
                          );
      *(undefined4 *)(param_1 + 0x24) = uVar5;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0x1e;
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar7 = *(int *)(iVar7 + 0x4c) + 0x1600;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x4c) + -0x1600;
      }
      *(int *)(param_1 + 0x4c) = iVar7;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 == -1) {
        if (cVar2 == '\x03') {
          uVar5 = sub_080399A0(param_1,1,*(undefined *)(param_1 + 0xc1));
          *(undefined4 *)(param_1 + 0x24) = uVar5;
        }
        else {
          uVar5 = sub_080697AC(param_1,*(undefined *)(param_1 + 0xc1),cVar2 + '\x01',
                               *(undefined *)(param_1 + 0x11));
          *(undefined4 *)(param_1 + 0x24) = uVar5;
          sub_080399A0(param_1,0,0);
        }
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(char *)(iVar7 + 0xd) != '\x02') break;
    }
    else if (*(char *)(iVar7 + 0xf) != '\x03') break;
    goto LAB_08069c5e;
  case 3:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) break;
    sub_080033F0(param_1 + 0x6c,0x11);
LAB_08069c5e:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 4:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      sub_080033F0(param_1 + 0x6c,6);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x11) == '\0') {
      puVar6 = &DAT_082b0da0;
      bVar1 = *(byte *)(param_1 + 0xc1);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xc1);
      puVar6 = &DAT_082b0da8;
    }
    *(undefined *)(param_1 + 0xd) = puVar6[(uint)bVar1 * 0xc];
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 1;
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xde) = 1;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

