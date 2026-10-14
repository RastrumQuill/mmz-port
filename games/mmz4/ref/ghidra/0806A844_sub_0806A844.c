// sub_0806A844 at 0x0806A844 (thumb)

undefined4 sub_0806A844(int param_1,uint param_2,uint param_3,char param_4)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined2 uVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined4 in_lr;
  
  uVar10 = param_3 & 0xff;
  uVar7 = (param_2 & 0xff) + uVar10 * 2 * (0x140 - (param_2 & 0xff)) + 0x80;
  uVar8 = uVar7 & 0xff;
  if ((uVar8 != *(byte *)(param_1 + 0x24)) || (param_4 != '\0')) {
    puVar11 = (undefined *)(param_1 + 0x70);
    uVar4 = CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar11);
    pcVar12 = (char *)(param_1 + 0x71);
    cVar1 = *pcVar12;
    pcVar6 = (char *)(param_1 + 0x72);
    cVar2 = *pcVar6;
    uVar3 = (undefined)uVar7;
    if (uVar8 == 0) {
      sub_0801CC9C(param_1);
      if (uVar10 == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
      pbVar9 = (byte *)(param_1 + 0x4a);
      *pbVar9 = *pbVar9 & 0xef | (byte)((param_3 & 1) << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar9 = *pbVar9 & 0xdf;
      *(undefined *)(param_1 + 0x24) = uVar3;
    }
    else {
      if (uVar8 != 0x80) {
        if ((*(byte *)(param_1 + 0x24) & 0x7f) == 0) {
          sub_0801CD28(param_1);
          sub_0801CFC8(param_1,uVar4,(short)cVar1,(short)cVar2);
          sub_0801CFC8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar11),(short)*pcVar12,
                       *pcVar6 + 1);
          sub_0801CFF0(param_1);
        }
        if (uVar10 == 0) {
          bVar5 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar5 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar5;
        *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
        pbVar9 = (byte *)(param_1 + 0x4a);
        *pbVar9 = *pbVar9 & 0xef | (byte)((param_3 & 1) << 4);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
        *(undefined *)(param_1 + 0x4d) = 0;
        *pbVar9 = *pbVar9 & 0xdf;
        *(undefined *)(param_1 + 0x24) = uVar3;
        return in_lr;
      }
      sub_0801CC9C(param_1);
      uVar7 = uVar10 + 1 & 1;
      if (uVar7 == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar5;
      *(char *)(param_1 + 0x4c) = (char)uVar7;
      pbVar9 = (byte *)(param_1 + 0x4a);
      *pbVar9 = *pbVar9 & 0xef | (byte)(uVar7 << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      *(undefined *)(param_1 + 0x4d) = 1;
      *pbVar9 = *pbVar9 & 0xdf | 0x20;
      *(undefined *)(param_1 + 0x24) = uVar3;
    }
    sub_0801CFC8(param_1,uVar4,(short)cVar1,(short)cVar2);
    sub_0801CFC8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*puVar11),(short)*pcVar12,
                 *pcVar6 + 1);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

