// sub_080658A4 at 0x080658A4 (thumb)

undefined4 sub_080658A4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 0x68) {
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  else if ((bVar1 < 0x69) && ((bVar1 == 0 || (bVar1 == 0x28)))) {
    iVar6 = 0;
    puVar5 = &DAT_0833d988;
    do {
      local_1c = *(int *)(param_1 + 0x54) + (&DAT_0833d960)[iVar6];
      local_18 = *(int *)(param_1 + 0x58) + (&DAT_0833d974)[iVar6];
      cVar2 = *(char *)(param_1 + 0x10);
      if (cVar2 == '\0') {
        sub_08098414(&local_1c,0x400,*puVar5);
      }
      else {
        if (cVar2 == '\x01') {
          uVar3 = *puVar5;
          uVar4 = 0x400;
        }
        else {
          if (cVar2 != '\x02') {
            sub_080AC238(&local_1c,0x600,*puVar5,1);
            goto LAB_08065930;
          }
          uVar3 = *puVar5;
          uVar4 = 0x600;
        }
        sub_080AC238(&local_1c,uVar4,uVar3,0);
      }
LAB_08065930:
      sub_080032EC(0x2d);
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

