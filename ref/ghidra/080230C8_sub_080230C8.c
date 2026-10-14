// sub_080230C8 at 0x080230C8 (thumb)

undefined4 sub_080230C8(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pcVar5 = (char *)(param_1 + 0xbf);
  pcVar6 = (char *)(param_1 + 0xc0);
  cVar2 = *pcVar6;
  if (cVar2 == '\0') {
    cVar2 = sub_0801B968(param_1);
    if (cVar2 != '\0') {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      puVar4 = (undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 0;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\0';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 3;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\x02';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
      sub_08022098(param_1);
      return in_lr;
    }
    if ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0xc) == 0) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      puVar4 = (undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 0;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\0';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 3;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\x01';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
LAB_080232ee:
      sub_08021FC8(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    puVar4 = (undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xc1) = *puVar4;
    *puVar4 = 0;
    *(char *)(param_1 + 0xc2) = *pcVar5;
    *pcVar5 = '\0';
    *(char *)(param_1 + 0xc3) = *pcVar6;
    *pcVar6 = '\0';
    *(undefined *)(param_1 + 0xc1) = *puVar4;
    *puVar4 = 3;
    *(char *)(param_1 + 0xc2) = *pcVar5;
    *pcVar5 = '\x01';
    *(char *)(param_1 + 0xc3) = *pcVar6;
    *pcVar6 = '\0';
  }
  else {
    if (*pcVar5 != '\0') {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      puVar4 = (undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 0;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\0';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 3;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\x02';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = cVar2;
      sub_08022098(param_1);
      return in_lr;
    }
    bVar1 = *(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
    uVar3 = bVar1 & 0xc;
    if ((bVar1 & 0xc) == 0) {
      *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar3;
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar3;
      puVar4 = (undefined *)(param_1 + 0xbe);
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 0;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\0';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = '\0';
      *(undefined *)(param_1 + 0xc1) = *puVar4;
      *puVar4 = 3;
      *(char *)(param_1 + 0xc2) = *pcVar5;
      *pcVar5 = '\x01';
      *(char *)(param_1 + 0xc3) = *pcVar6;
      *pcVar6 = cVar2;
      goto LAB_080232ee;
    }
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    puVar4 = (undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xc1) = *puVar4;
    *puVar4 = 0;
    *(char *)(param_1 + 0xc2) = *pcVar5;
    *pcVar5 = '\0';
    *(char *)(param_1 + 0xc3) = *pcVar6;
    *pcVar6 = '\0';
    *(undefined *)(param_1 + 0xc1) = *puVar4;
    *puVar4 = 3;
    *(char *)(param_1 + 0xc2) = *pcVar5;
    *pcVar5 = '\x01';
    *(char *)(param_1 + 0xc3) = *pcVar6;
    *pcVar6 = cVar2;
  }
  sub_08022778(param_1);
  return in_lr;
}

